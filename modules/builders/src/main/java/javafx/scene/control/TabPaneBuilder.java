/* 
 * Copyright (c) 2011, 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

package javafx.scene.control;

/**
Builder class for javafx.scene.control.TabPane
@see javafx.scene.control.TabPane
@deprecated This class is deprecated and will be removed in the next version
* @since JavaFX 2.0
*/
@javax.annotation.Generated("Generated by javafx.builder.processor.BuilderProcessor")
@Deprecated
public class TabPaneBuilder<B extends javafx.scene.control.TabPaneBuilder<B>> extends javafx.scene.control.ControlBuilder<B> implements javafx.util.Builder<javafx.scene.control.TabPane> {
    protected TabPaneBuilder() {
    }
    
    /** Creates a new instance of TabPaneBuilder. */
    @SuppressWarnings({"deprecation", "rawtypes", "unchecked"})
    public static javafx.scene.control.TabPaneBuilder<?> create() {
        return new javafx.scene.control.TabPaneBuilder();
    }
    
    private int __set;
    private void __set(int i) {
        __set |= 1 << i;
    }
    public void applyTo(javafx.scene.control.TabPane x) {
        super.applyTo(x);
        int set = __set;
        while (set != 0) {
            int i = Integer.numberOfTrailingZeros(set);
            set &= ~(1 << i);
            switch (i) {
                case 0: x.setRotateGraphic(this.rotateGraphic); break;
                case 1: x.setSelectionModel(this.selectionModel); break;
                case 2: x.setSide(this.side); break;
                case 3: x.setTabClosingPolicy(this.tabClosingPolicy); break;
                case 4: x.setTabMaxHeight(this.tabMaxHeight); break;
                case 5: x.setTabMaxWidth(this.tabMaxWidth); break;
                case 6: x.setTabMinHeight(this.tabMinHeight); break;
                case 7: x.setTabMinWidth(this.tabMinWidth); break;
                case 8: x.getTabs().addAll(this.tabs); break;
            }
        }
    }
    
    private boolean rotateGraphic;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#isRotateGraphic() rotateGraphic} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B rotateGraphic(boolean x) {
        this.rotateGraphic = x;
        __set(0);
        return (B) this;
    }
    
    private javafx.scene.control.SingleSelectionModel<javafx.scene.control.Tab> selectionModel;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getSelectionModel() selectionModel} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B selectionModel(javafx.scene.control.SingleSelectionModel<javafx.scene.control.Tab> x) {
        this.selectionModel = x;
        __set(1);
        return (B) this;
    }
    
    private javafx.geometry.Side side;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getSide() side} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B side(javafx.geometry.Side x) {
        this.side = x;
        __set(2);
        return (B) this;
    }
    
    private javafx.scene.control.TabPane.TabClosingPolicy tabClosingPolicy;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getTabClosingPolicy() tabClosingPolicy} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabClosingPolicy(javafx.scene.control.TabPane.TabClosingPolicy x) {
        this.tabClosingPolicy = x;
        __set(3);
        return (B) this;
    }
    
    private double tabMaxHeight;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getTabMaxHeight() tabMaxHeight} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabMaxHeight(double x) {
        this.tabMaxHeight = x;
        __set(4);
        return (B) this;
    }
    
    private double tabMaxWidth;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getTabMaxWidth() tabMaxWidth} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabMaxWidth(double x) {
        this.tabMaxWidth = x;
        __set(5);
        return (B) this;
    }
    
    private double tabMinHeight;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getTabMinHeight() tabMinHeight} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabMinHeight(double x) {
        this.tabMinHeight = x;
        __set(6);
        return (B) this;
    }
    
    private double tabMinWidth;
    /**
    Set the value of the {@link javafx.scene.control.TabPane#getTabMinWidth() tabMinWidth} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabMinWidth(double x) {
        this.tabMinWidth = x;
        __set(7);
        return (B) this;
    }
    
    private java.util.Collection<? extends javafx.scene.control.Tab> tabs;
    /**
    Add the given items to the List of items in the {@link javafx.scene.control.TabPane#getTabs() tabs} property for the instance constructed by this builder.
    */
    @SuppressWarnings("unchecked")
    public B tabs(java.util.Collection<? extends javafx.scene.control.Tab> x) {
        this.tabs = x;
        __set(8);
        return (B) this;
    }
    
    /**
    Add the given items to the List of items in the {@link javafx.scene.control.TabPane#getTabs() tabs} property for the instance constructed by this builder.
    */
    public B tabs(javafx.scene.control.Tab... x) {
        return tabs(java.util.Arrays.asList(x));
    }
    
    /**
    Make an instance of {@link javafx.scene.control.TabPane} based on the properties set on this builder.
    */
    public javafx.scene.control.TabPane build() {
        javafx.scene.control.TabPane x = new javafx.scene.control.TabPane();
        applyTo(x);
        return x;
    }
}