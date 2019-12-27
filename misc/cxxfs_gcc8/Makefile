PORTNAME=	cxxfs_gcc8
PORTVERSION=	8.0
CATEGORIES=	misc

MAINTAINER=	zrj@efnet.irc
COMMENT=	Extracted <filesystem> and libstdc++fs.a

LICENSE=	GPLv3RLE

DISTFILES=

BUILD_DEPENDS=	gcc8>0:lang/gcc8

do-configure:

do-build:

do-install:
	${MKDIR} -p ${STAGEDIR}${PREFIX}/cxxfs_gcc8/bits
	${MKDIR} -p ${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/bits
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/filesystem \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/filesystem
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/bits/fs_fwd.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/bits/fs_fwd.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/bits/fs_path.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/bits/fs_path.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/bits/fs_dir.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/bits/fs_dir.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/bits/fs_ops.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/bits/fs_ops.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/experimental/filesystem \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/filesystem
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/experimental/bits/fs_fwd.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/bits/fs_fwd.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/experimental/bits/fs_path.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/bits/fs_path.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/experimental/bits/fs_dir.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/bits/fs_dir.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/include/c++/experimental/bits/fs_ops.h \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/experimental/bits/fs_ops.h
	${INSTALL_DATA} ${LOCALBASE}/lib/gcc8/libstdc++fs.a \
		${STAGEDIR}${PREFIX}/cxxfs_gcc8/libstdc++fs.a

.include <bsd.port.mk>
