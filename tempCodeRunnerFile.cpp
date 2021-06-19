    {
            if ((q[i + 1] == 'G') && q[i] == 'B')
            {
                temp = q[i];
                q[i] = q[i + 1];
                q[i + 1] = temp;
            }
        }