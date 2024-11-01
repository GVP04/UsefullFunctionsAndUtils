//Arrange array by index array

using ArrangeDataType = int;

void ArrangeArrayByIdx(ArrangeDataType* ArrToArrange, int nItems, int *IdxArray)
{
    for (int i = 0; i < nItems; i++)
        if (i != IdxArray[i])
        {
            register int curId = i;
            int swapIndex = i;
            ArrangeDataType swapValue = ArrToArrange[curId];
            register int nextId;

            do
            {
                ArrToArrange[curId] = ArrToArrange[nextId = IdxArray[curId]];
                IdxArray[curId] = curId;
                curId = nextId;
            } while (IdxArray[nextId] !=  swapIndex);

            ArrToArrange[IdxArray[nextId] = nextId] = swapValue;
        }
}
