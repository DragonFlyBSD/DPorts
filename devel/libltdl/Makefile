# Created by: Jeremy Norris <ishmael27x@yahoo.com>
# $FreeBSD: devel/libltdl/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libltdl
MASTERDIR=	${.CURDIR}/../../devel/libtool

COMMENT=	System independent dlopen wrapper

LICENSE=	LGPL21
LICENSE_FILE=	${CONFIGURE_WRKSRC}/COPYING.LIB
USE_GNOME=	ltverhack
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
LIBTOOLFILES=	libltdl/configure
CONFIGURE_ARGS=	--enable-ltdl-install

CONFIGURE_WRKSRC=${WRKSRC}/libltdl
BUILD_WRKSRC=	${CONFIGURE_WRKSRC}
INSTALL_WRKSRC=	${CONFIGURE_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist
INFO=		# empty

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
