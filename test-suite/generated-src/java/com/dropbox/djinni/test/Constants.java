// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Record containing constants */
public final class Constants {

    /** bool_constant has documentation. */
    public static final boolean BOOL_CONSTANT = true;

    public static final byte I8_CONSTANT = 1;

    public static final short I16_CONSTANT = 2;

    public static final int I32_CONSTANT = 3;

    public static final long I64_CONSTANT = 4;

    public static final float F32_CONSTANT = 5.0f;

    /**
     * f64_constant has long documentation.
     * (Second line of multi-line documentation.
     *   Indented third line of multi-line documentation.)
     */
    public static final double F64_CONSTANT = 5.0;

    @Nonnull
    public static final String STRING_CONSTANT = "string-constant";

    @CheckForNull
    public static final Integer OPTIONAL_INTEGER_CONSTANT = 1;

    @Nonnull
    public static final Constants OBJECT_CONSTANT = new Constants(
        I32_CONSTANT /* mSomeInteger */ ,
        STRING_CONSTANT /* mSomeString */ );


    /*package*/ final int mSomeInteger;

    /*package*/ final String mSomeString;

    public Constants(
            int someInteger,
            @Nonnull String someString) {
        this.mSomeInteger = someInteger;
        this.mSomeString = someString;
    }

    public int getSomeInteger() {
        return mSomeInteger;
    }

    @Nonnull
    public String getSomeString() {
        return mSomeString;
    }
}
