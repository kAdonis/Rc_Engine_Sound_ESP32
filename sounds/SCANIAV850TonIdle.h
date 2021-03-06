const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3170;
const signed char samples[] = {
0, -1, -1, 0, 1, 2, 4, 7, 10, 14, 17, 22, 30, 32, 36, 39,
42, 48, 51, 54, 57, 59, 62, 67, 70, 73, 75, 77, 79, 84, 89, 92, 
96, 99, 105, 109, 113, 117, 120, 121, 126, 127, 127, 126, 125, 123, 118, 114, 
110, 106, 101, 92, 86, 80, 74, 68, 61, 50, 43, 35, 28, 20, 15, 8, 
5, 2, -1, -2, -4, -6, -6, -6, -5, -4, -2, -1, -2, -2, -2, -2, 
-2, -1, -1, 0, 0, -3, -5, -7, -8, -11, -14, -19, -22, -26, -29, -30, 
-32, -35, -37, -38, -39, -42, -43, -44, -46, -47, -47, -49, -52, -56, -59, -62, 
-66, -68, -71, -73, -74, -76, -78, -80, -80, -80, -80, -77, -74, -72, -71, -70, 
-69, -66, -62, -56, -52, -49, -45, -41, -37, -35, -33, -31, -30, -33, -37, -41, 
-45, -48, -52, -59, -62, -64, -68, -72, -73, -75, -76, -76, -76, -75, -74, -72, 
-71, -68, -66, -62, -56, -54, -52, -49, -48, -47, -45, -46, -46, -46, -46, -46, 
-45, -44, -45, -46, -47, -45, -43, -43, -41, -40, -40, -37, -35, -32, -28, -25, 
-22, -17, -13, -9, -3, 3, 10, 16, 21, 28, 36, 41, 49, 53, 59, 64, 
67, 70, 77, 78, 79, 82, 83, 82, 83, 83, 81, 81, 80, 77, 76, 75, 
73, 71, 70, 66, 63, 61, 60, 60, 57, 56, 56, 56, 56, 55, 55, 55, 
54, 53, 54, 55, 55, 55, 57, 58, 57, 58, 60, 61, 61, 61, 60, 58, 
58, 56, 53, 51, 49, 44, 39, 33, 30, 26, 20, 16, 12, 8, 6, 3, 
-3, -5, -7, -9, -11, -12, -14, -16, -16, -15, -14, -10, -7, -4, -2, 1, 
4, 10, 14, 17, 19, 22, 27, 30, 32, 35, 36, 38, 43, 45, 48, 49, 
49, 48, 47, 46, 43, 40, 36, 30, 26, 23, 21, 19, 15, 12, 11, 10, 
9, 8, 7, 2, 1, -1, -5, -8, -12, -15, -19, -24, -26, -28, -31, -32, 
-34, -36, -38, -40, -43, -44, -45, -46, -48, -50, -49, -47, -47, -46, -45, -46, 
-45, -45, -46, -45, -46, -48, -49, -51, -52, -53, -56, -57, -57, -57, -58, -60, 
-60, -59, -60, -60, -60, -60, -60, -61, -62, -62, -63, -64, -64, -67, -68, -69, 
-70, -71, -73, -74, -75, -77, -77, -81, -83, -85, -87, -88, -88, -88, -88, -87, 
-86, -85, -84, -82, -79, -78, -74, -70, -65, -61, -57, -53, -51, -47, -43, -40, 
-36, -32, -28, -25, -22, -19, -18, -16, -13, -11, -11, -10, -10, -10, -7, -5, 
-4, -5, -4, -2, 1, 2, 3, 5, 6, 8, 10, 11, 13, 14, 14, 16, 
18, 19, 19, 20, 20, 21, 22, 23, 23, 24, 27, 28, 30, 31, 32, 33, 
34, 36, 39, 40, 41, 44, 47, 49, 50, 52, 54, 57, 59, 61, 62, 62, 
63, 65, 67, 67, 67, 69, 70, 70, 70, 69, 69, 69, 67, 65, 63, 61, 
61, 59, 56, 55, 55, 54, 53, 54, 53, 53, 53, 53, 53, 53, 54, 55, 
54, 54, 56, 57, 58, 60, 62, 63, 63, 65, 67, 68, 69, 70, 74, 75, 
78, 80, 82, 84, 86, 85, 85, 85, 84, 83, 78, 76, 73, 70, 67, 61, 
58, 54, 49, 44, 39, 29, 25, 21, 16, 12, 8, 5, 3, 0, -2, -3, 
-6, -7, -9, -10, -11, -12, -12, -14, -15, -15, -17, -19, -21, -22, -24, -25, 
-26, -28, -30, -31, -32, -32, -32, -33, -34, -35, -34, -35, -32, -30, -29, -27, 
-25, -24, -23, -22, -21, -21, -21, -20, -21, -21, -22, -23, -24, -26, -28, -29, 
-29, -29, -31, -33, -34, -35, -36, -37, -39, -40, -41, -41, -41, -42, -43, -43, 
-43, -42, -43, -45, -47, -48, -48, -49, -48, -48, -48, -49, -49, -49, -48, -48, 
-48, -49, -50, -50, -50, -54, -54, -55, -56, -54, -54, -56, -57, -59, -59, -60, 
-61, -60, -60, -60, -59, -59, -60, -61, -60, -60, -60, -61, -60, -60, -60, -59, 
-58, -58, -57, -57, -57, -56, -54, -51, -50, -48, -46, -42, -39, -36, -33, -30, 
-27, -25, -20, -17, -15, -13, -12, -12, -8, -6, -5, -5, -6, -7, -3, -2, 
-2, -1, 0, 0, 1, 0, 0, 0, 0, -3, -6, -6, -5, -5, -6, -7, 
-6, -5, -5, -4, -3, -2, -3, -4, -3, -4, -4, -4, -5, -6, -7, -8, 
-7, -5, -4, -5, -5, -4, -5, -4, -5, -6, -7, -9, -10, -9, -8, -7, 
-3, -2, 1, 4, 5, 6, 7, 8, 9, 9, 9, 11, 14, 15, 17, 19, 
20, 21, 21, 21, 21, 21, 21, 22, 22, 22, 23, 24, 25, 27, 29, 33, 
36, 39, 46, 50, 54, 57, 61, 65, 73, 78, 80, 81, 82, 83, 84, 83, 
82, 79, 75, 70, 66, 61, 56, 51, 46, 39, 36, 33, 29, 26, 23, 19, 
17, 16, 14, 12, 13, 14, 14, 15, 16, 18, 20, 21, 22, 23, 23, 24, 
26, 27, 27, 27, 26, 26, 27, 27, 27, 25, 24, 25, 24, 26, 27, 26, 
27, 28, 27, 26, 26, 26, 25, 26, 26, 26, 26, 26, 26, 25, 23, 22, 
19, 16, 14, 11, 7, 7, 9, 8, 9, 10, 11, 14, 16, 21, 25, 28, 
31, 34, 38, 40, 42, 44, 45, 47, 48, 47, 46, 43, 39, 36, 31, 29, 
26, 23, 19, 12, 8, 6, 4, 2, 2, 0, -1, -1, -1, -2, -1, 1, 
1, 1, 0, -1, -1, -3, -4, -6, -7, -9, -14, -17, -21, -24, -27, -30, 
-34, -37, -40, -43, -44, -47, -48, -48, -47, -45, -42, -38, -37, -35, -32, -29, 
-29, -27, -27, -26, -25, -23, -22, -20, -17, -16, -14, -12, -10, -9, -8, -8, 
-9, -10, -10, -10, -11, -12, -13, -16, -18, -20, -22, -23, -24, -30, -34, -37, 
-40, -43, -45, -50, -52, -54, -55, -55, -56, -55, -55, -54, -53, -52, -49, -49, 
-50, -50, -49, -48, -47, -45, -43, -40, -37, -34, -31, -28, -27, -25, -24, -25, 
-23, -24, -26, -28, -30, -32, -34, -36, -39, -42, -46, -49, -51, -53, -54, -55, 
-57, -59, -60, -61, -61, -61, -60, -58, -56, -55, -54, -48, -45, -42, -40, -37, 
-34, -31, -30, -28, -25, -24, -20, -16, -12, -8, -6, -5, -2, 0, 3, 3, 
5, 6, 3, 2, 2, 3, 5, 8, 9, 10, 12, 14, 16, 20, 20, 21, 
22, 23, 26, 27, 29, 30, 32, 34, 37, 40, 41, 41, 41, 39, 38, 38, 
38, 37, 35, 34, 36, 37, 40, 42, 42, 44, 47, 48, 49, 50, 51, 56, 
57, 57, 60, 63, 63, 64, 65, 64, 65, 66, 66, 66, 65, 63, 61, 59, 
56, 55, 51, 48, 45, 42, 39, 37, 35, 34, 33, 32, 31, 30, 28, 26, 
24, 20, 18, 17, 15, 13, 11, 9, 8, 7, 6, 6, 3, 3, 5, 6, 
5, 4, 3, 2, 2, 2, 0, -1, -2, -3, -4, -6, -7, -6, -7, -7, 
-7, -9, -10, -11, -13, -16, -18, -18, -21, -22, -22, -23, -24, -25, -24, -25, 
-25, -24, -23, -23, -21, -20, -18, -16, -14, -9, -7, -5, -2, 2, 5, 10, 
12, 14, 15, 16, 15, 13, 13, 12, 9, 8, 4, 2, -2, -6, -8, -10, 
-12, -13, -15, -17, -19, -22, -26, -27, -30, -32, -32, -33, -34, -36, -38, -37, 
-37, -36, -35, -34, -35, -35, -34, -34, -34, -32, -32, -30, -29, -28, -26, -25, 
-24, -23, -22, -23, -23, -22, -23, -21, -18, -16, -14, -12, -10, -9, -8, -6, 
-5, -4, -2, 0, 1, 3, 6, 9, 13, 17, 18, 21, 25, 27, 29, 31, 
33, 35, 38, 40, 43, 44, 45, 46, 45, 46, 45, 42, 40, 39, 36, 30, 
26, 23, 19, 16, 13, 9, 7, 5, 4, 3, 2, 1, 1, -1, -1, 0, 
0, -2, -2, -2, -3, -4, -2, -4, -6, -5, -6, -9, -12, -15, -18, -21, 
-26, -31, -33, -35, -35, -35, -36, -37, -38, -37, -37, -37, -36, -36, -37, -36, 
-34, -35, -33, -32, -32, -29, -27, -26, -27, -25, -24, -25, -24, -26, -24, -21, 
-18, -14, -11, -7, -3, 1, 5, 10, 13, 17, 19, 21, 23, 25, 29, 30, 
31, 33, 34, 35, 37, 37, 37, 36, 35, 36, 37, 38, 37, 35, 34, 32, 
30, 27, 26, 24, 21, 19, 18, 19, 19, 18, 18, 17, 16, 16, 14, 12, 
12, 11, 8, 5, 3, 3, 2, 0, 0, -1, -3, -4, -9, -13, -16, -19, 
-23, -29, -31, -33, -34, -35, -36, -36, -35, -34, -32, -30, -30, -29, -27, -26, 
-25, -24, -21, -19, -15, -12, -8, -4, 2, 6, 9, 12, 15, 16, 21, 21, 
22, 23, 25, 28, 29, 30, 31, 32, 35, 38, 41, 44, 45, 45, 48, 50, 
52, 54, 54, 53, 51, 51, 50, 49, 48, 46, 45, 43, 41, 39, 37, 31, 
28, 25, 23, 22, 20, 16, 14, 12, 12, 12, 13, 14, 15, 13, 11, 9, 
8, 7, 5, 3, 0, -3, -5, -6, -5, -7, -9, -11, -12, -13, -16, -19, 
-22, -27, -30, -33, -35, -36, -35, -38, -39, -39, -38, -35, -34, -36, -37, -35, 
-34, -35, -33, -31, -28, -26, -25, -24, -21, -20, -19, -18, -19, -19, -18, -19, 
-19, -19, -20, -22, -22, -22, -23, -23, -25, -26, -26, -27, -27, -27, -28, -32, 
-34, -37, -39, -39, -41, -42, -44, -45, -47, -49, -49, -51, -52, -52, -53, -54, 
-57, -58, -59, -59, -59, -61, -62, -62, -62, -62, -63, -60, -59, -58, -58, -58, 
-57, -57, -56, -55, -55, -54, -53, -53, -52, -52, -50, -48, -46, -44, -42, -42, 
-40, -40, -41, -41, -39, -39, -39, -37, -36, -34, -32, -29, -24, -20, -19, -19, 
-18, -16, -12, -11, -9, -7, -4, -2, 3, 6, 10, 15, 18, 21, 26, 29, 
33, 37, 39, 44, 49, 52, 55, 58, 61, 66, 67, 68, 71, 73, 75, 77, 
78, 79, 80, 81, 83, 84, 85, 85, 86, 86, 87, 88, 88, 88, 89, 91, 
93, 94, 93, 93, 92, 89, 88, 89, 88, 87, 86, 84, 82, 81, 82, 80, 
78, 78, 76, 74, 72, 70, 68, 68, 68, 67, 66, 65, 65, 65, 63, 61, 
61, 60, 58, 58, 57, 53, 53, 52, 50, 49, 47, 45, 44, 40, 38, 38, 
37, 36, 35, 31, 29, 29, 28, 27, 27, 25, 23, 22, 20, 18, 16, 14, 
12, 11, 10, 8, 4, 1, -1, -3, -5, -10, -12, -15, -17, -19, -21, -25, 
-27, -28, -28, -28, -30, -31, -30, -29, -29, -28, -29, -30, -29, -28, -28, -28, 
-27, -28, -29, -30, -31, -31, -32, -35, -37, -38, -41, -42, -44, -46, -50, -54, 
-56, -59, -60, -62, -63, -64, -66, -67, -68, -67, -67, -69, -71, -72, -71, -71, 
-71, -71, -72, -72, -70, -69, -69, -69, -70, -71, -71, -73, -74, -72, -71, -70, 
-70, -70, -70, -67, -67, -67, -65, -63, -61, -59, -58, -57, -57, -56, -53, -53, 
-50, -50, -50, -49, -49, -49, -48, -47, -46, -46, -47, -47, -46, -46, -46, -45, 
-45, -45, -44, -43, -41, -38, -36, -34, -32, -31, -28, -27, -25, -24, -22, -19, 
-16, -14, -12, -10, -7, -6, -1, 0, 2, 3, 4, 6, 6, 5, 6, 8, 
8, 10, 11, 11, 11, 10, 11, 11, 12, 12, 13, 14, 16, 17, 16, 15, 
16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 15, 14, 13, 10, 10, 10, 
10, 10, 11, 11, 11, 11, 13, 14, 17, 18, 20, 22, 23, 25, 26, 25, 
25, 24, 25, 26, 27, 28, 27, 27, 27, 27, 26, 26, 27, 27, 27, 25, 
23, 24, 25, 26, 26, 25, 24, 25, 26, 25, 23, 23, 23, 21, 20, 19, 
19, 19, 17, 16, 16, 15, 13, 13, 13, 11, 10, 10, 9, 9, 8, 8, 
8, 7, 6, 6, 7, 6, 5, 7, 7, 7, 8, 7, 7, 6, 5, 4, 
3, 0, -3, -4, -5, -7, -8, -8, -9, -9, -10, -12, -13, -13, -12, -11, 
-10, -9, -9, -9, -6, -5, -2, 1, 2, 5, 6, 8, 8, 10, 15, 19, 
22, 24, 26, 29, 33, 36, 40, 45, 48, 50, 52, 52, 53, 56, 58, 59, 
60, 59, 57, 55, 55, 56, 56, 55, 54, 53, 52, 50, 50, 50, 50, 51, 
52, 52, 51, 51, 51, 50, 51, 51, 51, 52, 53, 51, 51, 51, 52, 53, 
52, 51, 50, 49, 49, 50, 50, 49, 48, 47, 45, 44, 43, 42, 41, 38, 
37, 36, 33, 33, 32, 32, 32, 30, 29, 26, 24, 22, 19, 16, 13, 9, 
6, 4, 2, -2, -4, -7, -10, -12, -13, -16, -18, -18, -18, -18, -19, -20, 
-19, -18, -17, -16, -18, -18, -17, -17, -17, -18, -20, -20, -21, -22, -24, -26, 
-26, -29, -30, -30, -33, -36, -38, -42, -44, -46, -49, -52, -54, -58, -62, -65, 
-70, -71, -72, -75, -78, -81, -82, -85, -88, -89, -92, -93, -97, -99, -102, -103, 
-104, -105, -105, -106, -106, -106, -105, -102, -103, -102, -100, -100, -98, -94, -91, -88, 
-85, -83, -78, -75, -74, -72, -70, -70, -68, -66, -66, -65, -64, -62, -62, -63, 
-61, -59, -58, -58, -58, -57, -56, -54, -53, -51, -50, -50, -49, -48, -46, -44, 
-41, -38, -36, -34, -30, -27, -25, -23, -21, -19, -15, -12, -9, -5, -3, 1, 
3, 5, 8, 11, 12, 17, 20, 23, 25, 27, 29, 31, 32, 34, 36, 38, 
38, 38, 39, 40, 41, 41, 42, 42, 42, 42, 42, 41, 41, 41, 41, 42, 
43, 45, 46, 47, 49, 49, 49, 51, 52, 52, 52, 53, 54, 57, 58, 59, 
61, 62, 63, 64, 64, 65, 66, 67, 66, 67, 68, 69, 69, 69, 68, 67, 
67, 67, 67, 67, 67, 68, 68, 69, 69, 68, 68, 67, 66, 66, 65, 62, 
62, 59, 58, 57, 55, 54, 52, 50, 50, 48, 44, 41, 40, 40, 39, 38, 
37, 37, 37, 36, 36, 35, 33, 32, 31, 30, 28, 25, 23, 23, 21, 18, 
17, 15, 13, 11, 10, 8, 5, 3, 3, 1, -2, -3, -5, -7, -9, -12, 
-14, -16, -17, -17, -18, -21, -21, -21, -21, -21, -22, -23, -23, -23, -24, -26, 
-28, -30, -30, -30, -31, -31, -32, -33, -34, -37, -38, -39, -41, -42, -44, -46, 
-47, -47, -47, -47, -47, -47, -46, -46, -45, -42, -40, -39, -37, -36, -35, -31, 
-29, -27, -25, -22, -19, -17, -14, -12, -11, -9, -8, -8, -8, -8, -8, -8, 
-10, -10, -9, -9, -8, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -10, 
-10, -9, -10, -10, -11, -11, -10, -11, -11, -11, -12, -13, -14, -13, -12, -12, 
-12, -12, -10, -10, -9, -6, -5, -3, -1, 0, 1, 2, 3, 3, 3, 4, 
5, 6, 6, 6, 6, 4, 2, 2, 0, -3, -5, -7, -9, -11, -12, -13, 
-13, -12, -13, -13, -13, -12, -10, -9, -8, -5, -3, -2, 0, 1, 2, 3, 
3, 3, 4, 4, 2, 1, 0, 0, -1, -2, -2, -2, -2, -2, -2, -1, 
1, 1, 2, 2, 0, 0, 0, 1, 1, 2, 2, 3, 3, 2, 2, 0, 
0, -3, -5, -7, -10, -10, -10, -10, -11, -10, -10, -13, -14, -15, -16, -18, 
-19, -19, -18, -19, -20, -20, -21, -21, -21, -21, -22, -23, -24, -26, -26, -26, 
-26, -25, -25, -26, -26, -27, -27, -27, -26, -26, -25, -24, -24, -23, -20, -19, 
-18, -17, -17, -16, -15, -16, -16, -16, -14, -12, -12, -11, -10, -9, -8, -5, 
-4, -2, 1, 2, 2, 2, 3, 3, 4, 5, 9, 10, 12, 13, 14, 16, 
19, 22, 24, 26, 27, 29, 31, 33, 36, 39, 42, 47, 48, 49, 51, 52, 
54, 56, 57, 57, 57, 56, 54, 55, 55, 54, 53, 53, 54, 53, 50, 50, 
50, 48, 48, 47, 45, 44, 42, 39, 37, 35, 34, 33, 33, 32, 33, 32, 
30, 31, 32, 32, 31, 30, 26, 23, 20, 20, 18, 16, 15, 14, 13, 11, 
9, 7, 6, 7, 7, 6, 5, 3, 1, 0, 1, 4, 7, 9, 9, 8, 
8, 7, 7, 6, 3, -1, -6, -9, -12, -16, -19, -21, -23, -25, -26, -27, 
-30, -33, -35, -37, -39, -40, -40, -41, -42, -43, -43, -42, -41, -39, -38, -37, 
-37, -36, -35, -36, -36, -36, -38, -40, -41, -42, -42, -42, -46, -47, -47, -48, 
-49, -51, -54, -56, -56, -58, -59, -60, -60, -59, -61, -62, -62, -61, -61, -61, 
-61, -63, -64, -66, -66, -66, -69, -71, -71, -71, -70, -69, -68, -67, -65, -62, 
-58, -54, -52, -50, -44, -41, -37, -32, -29, -24, -21, -19, -17, -13, -9, -2, 
1, 4, 6, 8, 10, 12, 14, 16, 18, 20, 23, 25, 27, 30, 32, 34, 
36, 37, 38, 38, 38, 37, 36, 36, 36, 36, 35, 34, 34, 33, 33, 31, 
31, 29, 27, 27, 26, 26, 25, 25, 26, 26, 28, 28, 31, 33, 34, 35, 
36, 37, 40, 41, 43, 44, 44, 47, 48, 49, 51, 51, 52, 53, 53, 54, 
56, 58, 58, 59, 59, 60, 61, 61, 61, 59, 58, 58, 58, 57, 55, 54, 
51, 48, 47, 46, 44, 41, 39, 37, 35, 33, 30, 28, 28, 28, 28, 27, 
27, 28, 29, 30, 31, 32, 33, 34, 36, 38, 38, 38, 40, 41, 43, 44, 
44, 43, 41, 40, 38, 35, 30, 27, 24, 21, 19, 16, 12, 11, 10, 9, 
5, 1, -2, -3, -5, -7, -9, -12, -13, -14, -17, -19, -22, -24, -25, -26, 
-28, -31, -33, -35, -38, -40, -41, -42, -45, -47, -48, -48, -48, -48, -49, -48, 
-49, -49, -49, -51, -51, -51, -50, -48, -47, -45, -43, -41, -40, -37, -36, -36, 
-35, -34, -33, -34, -36, -37, -37, -37, -37, -37, -38, -40, -42, -43, -43, -43, 
-43, -43, -43, -44, -43, -40, -39, -39, -39, -38, -38, -37, -37, -37, -36, -36, 
-34, -33, -33, -31, -30, -30, -29, -27, -25, -23, -20, -17, -16, -14, -12, -10, 
-9, -6, -4, -2, -1, 1, 1, 1, 0, 0, 1, 2, 2, 0, -1, -1, 
0, 1, 1, 1, 0, -2, -3, -5, -7, -6, -5, -4, -3, -2, 0, 0, 
0, 1, 2, 3, 5, 8, 9, 9, 11, 14, 16, 15, 17, 19, 20, 20, 
20, 19, 18, 17, 17, 16, 14, 13, 10, 8, 7, 7, 6, 5, 5, 2, 
1, 0, -1, -3, -4, -3, -3, -2, 0, 0, 1, 1, 0, 0, 1, 1, 
0, 0, -1, -2, -3, -3, -1, -1, -2, -4, -6, -8, -10, -11, -11, -11, 
-11, -11, -11, -13, -14, -13, -13, -15, -17, -17, -19, -19, -19, -20, -19, -18, 
-18, -19, -23, -26, -27, -27, -29, -30, -31, -31, -31, -31, -32, -33, -32, -33, 
-34, -35, -37, -38, -38, -36, -35, -33, -31, -24, -19, -15, -12, -10, -8, -5, 
-3, 0, };
