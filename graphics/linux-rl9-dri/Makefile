PORTNAME=	dri
PORTVERSION=	25.2.7
DISTVERSIONSUFFIX=	-4.el9
CATEGORIES=	graphics linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Mesa libGL runtime libraries (Rocky Linux ${LINUX_DIST_VER})

USES=		linux:rl9
USE_LDCONFIG=	yes
USE_LINUX=	elfutils-libelf expat libdrm libglvnd llvm spirv-tools wayland xorglibs
USE_LINUX_RPM=	yes
WANT_LINUX32=	yes

LIB_DISTNAMES=	freeglut-3.2.1-10.el9 \
		mesa-compat-libOSMesa-25.0.7-2.el9.0.1 \
		mesa-compat-libxatracker-25.0.7-2.el9.0.1 \
		mesa-dri-drivers-${DISTVERSIONFULL} \
		mesa-libEGL-${DISTVERSIONFULL} \
		mesa-libGL-${DISTVERSIONFULL} \
		mesa-libGLU-9.0.1-6.el9 \
		mesa-libGLw-8.0.0-23.el9 \
		mesa-libgbm-${DISTVERSIONFULL}
#		mesa-libglapi-${DISTVERSIONFULL}

LIB_DISTNAMES_x86_64=	m/mesa-vulkan-drivers-${DISTVERSIONFULL}

SRC_DISTFILES=	freeglut-3.2.1-10.el9${SRC_SUFX}:SOURCE \
		mesa-${DISTVERSIONFULL}${SRC_SUFX}:SOURCE \
		mesa-compat-25.0.7-2.el9.0.1${SRC_SUFX}:SOURCE \
		mesa-libGLU-9.0.1-6.el9${SRC_SUFX}:SOURCE \
		mesa-libGLw-8.0.0-23.el9${SRC_SUFX}:SOURCE

CONFLICTS=	linux-c7-${PORTNAME}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-install:
.if ${ARCH} == x86_64  ||  ${ARCH} == i386
	${LN} -sf libGLX_mesa.so.0 \
		${STAGEDIR}${PREFIX}/usr/lib/libGLX_system.so.0
.endif
.if ${ARCH} == aarch64 || ${ARCH} == x86_64
	${LN} -sf libGLX_mesa.so.0 \
		${STAGEDIR}${PREFIX}/usr/lib64/libGLX_system.so.0
.endif

.include <bsd.port.mk>
