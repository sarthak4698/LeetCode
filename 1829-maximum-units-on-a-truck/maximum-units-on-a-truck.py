class Solution(object):
    def maximumUnits(self, boxTypes, truckSize):
        
        boxTypes.sort(key = lambda x:x[1] , reverse=True)
        total =0

        for box, n in boxTypes:
            if truckSize==0:
                return total
            
            boxes =min(box , truckSize)
            total +=boxes*n

            truckSize -=boxes
        
        return total