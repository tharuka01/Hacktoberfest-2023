/**
 * Class for a set. Each set contains an array of zero or more elements of class Element
 */


public class Set {

    private Element[] elements;

    /**
     * A new set has zero elements
     */
    public Set() {
        this.elements = new Element[0];
    }


    /**
     * Checks if an element is already in the set
     */
    public boolean contains(Element newElement) throws setException {
        if (newElement == null) {
            throw new setException("Error: Null-object input!");
        }
        // Iterate through the array and compare with the new element
        for (Element element : elements) {
            if (element.hashCode() == newElement.hashCode()) {
                if (element.equals(newElement)) {
                    return true;
                }
            }
        }
        return false;
    }

    /**
     * Performs a union of 2 Sets and returns the result as a new set
     */
    public static Set union(Set set1, Set set2) throws setException {
        if (set1 == null || set2 == null) {
            throw new setException("Error: Null-object input!");
        }

        Set newSet = new Set();
        int newLength = set1.elements.length + set2.elements.length;

        //Checks how many elements of set 2 are already contained in set 1
        for (Element anElement : set1.elements) {
            if (set2.contains(anElement)) {
                newLength--;
            }
        }


        //New array with contents of set 1 and additional length for the new elements from set 2
        newSet.elements = new Element[newLength];
        System.arraycopy(set1.elements, 0, newSet.elements, 0, set1.elements.length);

        //Add elements from set 2 that are not already in set 1
        int indexNewFigures = set1.elements.length;
        for (int i = 0; i < set2.elements.length; i++) {
            if (!set1.contains(set2.elements[i])) {
                newSet.elements[indexNewFigures] = set2.elements[i];
                indexNewFigures++;
            }
        }


        return newSet;
    }