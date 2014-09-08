// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

package com.dropbox.djinni.test;

import java.util.HashMap;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class TestHelpers {
    public static native SetRecord getSetRecord();

    public static native boolean checkSetRecord(SetRecord rec);

    public static native PrimitiveList getPrimitiveList();

    public static native boolean checkPrimitiveList(PrimitiveList pl);

    public static native NestedCollection getNestedCollection();

    public static native boolean checkNestedCollection(NestedCollection nc);

    public static native HashMap<String, Long> getMap();

    public static native boolean checkMap(HashMap<String, Long> m);

    public static native HashMap<String, Long> getEmptyMap();

    public static native boolean checkEmptyMap(HashMap<String, Long> m);

    public static native MapListRecord getMapListRecord();

    public static native boolean checkMapListRecord(MapListRecord m);

    public static native void checkClientInterfaceAscii(ClientInterface i);

    public static native void checkClientInterfaceNonascii(ClientInterface i);

    public static native Integer returnNone();

    public static final class NativeProxy extends TestHelpers
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private NativeProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }
    }
}
