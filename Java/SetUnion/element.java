public abstract class Element {

    /**
     * Name of element
     */

    final protected String name;

    /**
     * Sets element name 
     */

    public Element(String name) {
        if (name == null) {
            throw new IllegalArgumentException("Name cannot be null");
        }

        if (name.length() == 0) {
            throw new IllegalArgumentException("A name is required");
        }

        this.name = name;
    }

   
    @Override
    public boolean equals(Object obj) {
        if (this.getClass() != obj.getClass()) { // Sind beide Typen gleich?
            return false;
        }
        Element objTolkienfigur = (Element) obj;

    }



    @Override
    public int hashCode() {
        return name.hashCode() + hashCode();
    }

}
