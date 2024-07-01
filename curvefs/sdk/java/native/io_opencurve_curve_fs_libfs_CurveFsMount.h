/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_opencurve_curve_fs_libfs_CurveFsMount */

#ifndef _Included_io_opencurve_curve_fs_libfs_CurveFsMount
#define _Included_io_opencurve_curve_fs_libfs_CurveFsMount
#ifdef __cplusplus
extern "C" {
#endif
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_RDONLY
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_RDONLY 1L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_RDWR
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_RDWR 2L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_APPEND
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_APPEND 4L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_CREAT
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_CREAT 8L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_TRUNC
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_TRUNC 16L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_EXCL
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_EXCL 32L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_WRONLY
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_WRONLY 64L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_O_DIRECTORY
#define io_opencurve_curve_fs_libfs_CurveFsMount_O_DIRECTORY 128L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_SET
#define io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_SET 0L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_CUR
#define io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_CUR 1L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_END
#define io_opencurve_curve_fs_libfs_CurveFsMount_SEEK_END 2L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_MODE
#define io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_MODE 1L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_UID
#define io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_UID 2L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_GID
#define io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_GID 4L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_MTIME
#define io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_MTIME 8L
#undef io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_ATIME
#define io_opencurve_curve_fs_libfs_CurveFsMount_SETATTR_ATIME 16L
/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsNew
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsNew
  (JNIEnv *, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsDelete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsDelete
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsConfSet
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsConfSet
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsMount
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsMount
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsUmount
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsUmount
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsMkDirs
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsMkDirs
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsRmDir
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsRmDir
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsListDir
 * Signature: (JLjava/lang/String;)[Lio/opencurve/curve/fs/libfs/CurveFsMount/Dirent;
 */
JNIEXPORT jobjectArray JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsListDir
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsCreate
 * Signature: (JLjava/lang/String;ILio/opencurve/curve/fs/libfs/CurveFsMount/File;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsCreate
  (JNIEnv *, jclass, jlong, jstring, jint, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsOpen
 * Signature: (JLjava/lang/String;ILio/opencurve/curve/fs/libfs/CurveFsMount/File;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsOpen
  (JNIEnv *, jclass, jlong, jstring, jint, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsLSeek
 * Signature: (JIJI)J
 */
JNIEXPORT jlong JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsLSeek
  (JNIEnv *, jclass, jlong, jint, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativieCurveFsRead
 * Signature: (JIJ[BJ)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativieCurveFsRead
  (JNIEnv *, jclass, jlong, jint, jlong, jbyteArray, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativieCurveFsWrite
 * Signature: (JIJ[BJ)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativieCurveFsWrite
  (JNIEnv *, jclass, jlong, jint, jlong, jbyteArray, jlong);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsFSync
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsFSync
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsClose
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsClose
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsUnlink
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsUnlink
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsStatFs
 * Signature: (JLio/opencurve/curve/fs/libfs/CurveFsMount/StatVfs;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsStatFs
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsLStat
 * Signature: (JLjava/lang/String;Lio/opencurve/curve/fs/libfs/CurveFsMount/Stat;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsLStat
  (JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsFStat
 * Signature: (JILio/opencurve/curve/fs/libfs/CurveFsMount/Stat;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsFStat
  (JNIEnv *, jclass, jlong, jint, jobject);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsSetAttr
 * Signature: (JLjava/lang/String;Lio/opencurve/curve/fs/libfs/CurveFsMount/Stat;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsSetAttr
  (JNIEnv *, jclass, jlong, jstring, jobject, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsChmod
 * Signature: (JLjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsChmod
  (JNIEnv *, jclass, jlong, jstring, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsChown
 * Signature: (JLjava/lang/String;II)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsChown
  (JNIEnv *, jclass, jlong, jstring, jint, jint);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsRename
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsRename
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsRemove
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsRemove
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     io_opencurve_curve_fs_libfs_CurveFsMount
 * Method:    nativeCurveFsRemoveAll
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_io_opencurve_curve_fs_libfs_CurveFsMount_nativeCurveFsRemoveAll
  (JNIEnv *, jclass, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif