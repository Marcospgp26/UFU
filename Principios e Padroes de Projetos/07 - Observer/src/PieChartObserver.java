import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.util.Vector;

import javax.swing.JPanel;




public class PieChartObserver extends JPanel implements Observer{

    private Vector<CourseRecord> courseData;

    public PieChartObserver(CourseData data) {
        data.attach(this);
        this.courseData = data.getUpdate();
        this.setPreferredSize(new Dimension(300, 300));
        this.setBackground(Color.white);
    }

    public void paint(Graphics g){
        super.paint(g);
        int radius = 100;

        //first compute the total number of students
        double total = 0.0;
        for (int i = 0; i < courseData.size(); i++) {
            total += courseData.elementAt(i).getNumOfStudents();
        }
        //if total == 0 nothing to draw
        if (total != 0) {
            double startAngle = 0.0;
            for (int i = 0; i < courseData.size(); i++) {
                double ratio =
                        (courseData.elementAt(i).getNumOfStudents() / total) * 360.0;
                //draw the arc

                g.setColor(LayoutConstants.courseColours[i%LayoutConstants.courseColours.length]);

                g.fillArc(LayoutConstants.xOffset,LayoutConstants.yOffset, 2 * radius, 2 * radius, (int) startAngle, (int) ratio);
                startAngle += ratio;
            }
        }
    }

    public void update(Observable o) {
        CourseData data = (CourseData) o;
        this.courseData = data.getUpdate();
        this.setPreferredSize(new Dimension(300, 300));
        this.revalidate();
        this.repaint();
    }



}
