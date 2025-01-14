import java.util.*;

class Solution
{
    public int maxWidthOfVerticalArea(int[][] points)
    {
        int[] x_axis = new int[points.length];

        for (int i = 0; i < points.length; i++)
        {
            x_axis[i] = points[i][0];
        }

        Arrays.sort(x_axis);

        int width = 0;
        for (int i = 1; i < x_axis.length; i++)
        {
            width = Math.max(width, x_axis[i] - x_axis[i - 1]);
        }

        return width;
    }
}

