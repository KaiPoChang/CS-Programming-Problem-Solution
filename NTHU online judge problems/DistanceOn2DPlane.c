#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

Point * ones_vec_1(int length)
{
    Point *arr = (Point*) malloc(length*sizeof(Point));
    for (int i=0; i<length; i++){
        scanf("%d%d", &arr[i].x, &arr[i].y);
    }
    return arr;
   /// Please implement
   /// 1. Malloc memory for point array
   /// 2. Read values into point array
   /// 3. Return the address of the first element in the array

}

float compute_distance(Point* a, int first_id, int second_id)
{
    float ans;
    int w, l;
    Point first_p, second_p;

    first_p = a[first_id];
    second_p = a[second_id];

    w = first_p.x-second_p.x;
    l = first_p.y-second_p.y;
    //printf("first_p.x: %d; first_p.y: %d\n", first_p.x, first_p.y);
    //printf("second_p.x: %d; second_p.y: %d\n", second_p.x, second_p.y);

    ans = sqrt(w*w + l*l);
    /// Please implement
    /// 1. Get two point from function argument
    /// 2. Compute 2D distance and return ans

    return ans;
}

int main(void)
{
   Point *point_array;
   int i, length, N;
   float ans;

   scanf("%d", &length);
   // give point_array memory and get first element address
   point_array = ones_vec_1(length);

   scanf("%d", &N);
   for (i = 0; i < N; i++){
      int first, second;
      scanf("%d %d", &first, &second);
      // compute distance of two points
      ans = compute_distance(point_array, first, second);
      printf("%.3f\n", ans);
   }

   return 0;
}
