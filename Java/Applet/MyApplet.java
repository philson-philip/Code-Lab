import java.applet.*;
import java.awt.*;
/* <applet code = "MyApplet.java" width=100 height=100>
	</applet>
*/
public class MyApplet extends Applet
{
	public void init()
	{
		setBackground(Color.RED);
	}
	public void paint(Graphics G)
	{
		G.drawString("HEY AJCE",1000,1000);
	}

}
