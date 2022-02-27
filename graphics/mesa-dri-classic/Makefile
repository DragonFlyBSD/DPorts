# zrj
PORTNAME=	mesa-dri-classic
PORTVERSION=	${MESAVERSION}
PORTREVISION=	3
CATEGORIES=	graphics

COMMENT=	Classic legacy OpenGL software renderer drivers

OPTIONS_GROUP=			PLATFORM
OPTIONS_GROUP_PLATFORM=		PLATFORM_X11 PLATFORM_WAYLAND
PLATFORM_X11_DESC=		Enable X11 support for GBM/EGL
PLATFORM_WAYLAND_DESC=		Enable Wayland support for GBM/EGL
PLATFORM_WAYLAND_IMPLIES=	WAYLAND

OPTIONS_DEFINE=		WAYLAND ZSTD
OPTIONS_DEFAULT=	PLATFORM_X11 ZSTD
OPTIONS_SUB=		yes

WAYLAND_DESC=		Enable support for the Wayland platform in Vulkan drivers
WAYLAND_BUILD_DEPENDS=	wayland-protocols>=1.8:graphics/wayland-protocols
WAYLAND_LIB_DEPENDS=	libwayland-client.so:graphics/wayland
WAYLAND_IMPLIES=	PLATFORM_WAYLAND

ZSTD_DESC=		Use ZSTD for shader cache
ZSTD_LIB_DEPENDS=	libzstd.so:archivers/zstd
ZSTD_MESON_ENABLED=	zstd

.include <bsd.port.options.mk>

MESAVERSION=	${MESABASEVERSION}${MESASUBVERSION:C/^(.)/.\1/}
MESADISTVERSION=${MESABASEVERSION}${MESASUBVERSION:C/^(.)/-\1/}

MESABASEVERSION=	20.2.3
MESASUBVERSION=

MASTER_SITES=	https://mesa.freedesktop.org/archive/ \
		https://mesa.freedesktop.org/archive/${MESABASEVERSION}/ \
		ftp://ftp.freedesktop.org/pub/mesa/ \
		ftp://ftp.freedesktop.org/pub/mesa/${MESABASEVERSION}/

DISTFILES=	mesa-${MESADISTVERSION}${EXTRACT_SUFX}

MAINTAINER=	zrj@efnet.irc

COMPONENT=	${PORTNAME:tl:C/^lib//:C/mesa-//}

BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/pthread-stubs.pc:devel/libpthread-stubs \
		${PYTHON_PKGNAMEPREFIX}mako>0:textproc/py-mako@${PY_FLAVOR}
LIB_DEPENDS+=	libexpat.so:textproc/expat2
.if ${PORT_OPTIONS:MPLATFORM_X11}
USES+=	xorg
.endif
LIB_DEPENDS+=	libdrm.so:graphics/libdrm
LIB_DEPENDS+=	libglapi.so:graphics/mesa-libs

USES+=		compiler:c++11-lib bison meson pathfix pkgconfig \
		python:3.6+,build shebangfix tar:xz

python_OLD_CMD=	/usr/bin/env[[:space:]]python2 /usr/bin/python2 /bin/env[[:space:]]python
SHEBANG_FILES=	src/gallium/*/*/*.py src/gallium/tools/trace/*.py \
		src/gallium/drivers/svga/svgadump/svga_dump.py \
		src/mapi/glapi/gen/*.py src/mapi/mapi_abi.py \
		src/mesa/main/get_*.py src/util/format_srgb.py \
		src/amd/*/*.py src/intel/genxml/gen_pack_header.py

WRKSRC=		${WRKDIR}/mesa-${MESADISTVERSION}

.include <bsd.port.pre.mk>

BINARY_ALIAS+=	python3=${PYTHON_VERSION}

# XXX disable dri3 until ftigeot figure it out
MESON_ARGS+=	-Ddri3=disabled

.if ${PORT_OPTIONS:MPLATFORM_X11}
MESA_PLATFORMS+=	x11
USE_XORG+=		xorgproto x11 xdamage xext xfixes xshmfence xv
.endif

.if ${PORT_OPTIONS:MPLATFORM_WAYLAND}
MESA_PLATFORMS+=	wayland
.endif

# gallium drivers are installed separately in graphics/mesa-gallium-dri port
MESON_ARGS+=	-Dgallium-xvmc=disabled \
		-Dgallium-xa=disabled \
		-Dgallium-va=disabled \
		-Dgallium-vdpau=disabled

MESON_ARGS+=	-Ddri-drivers="swrast" \
		-Dgallium-drivers="" \
		-Dvulkan-drivers="" \
		-Dplatforms="${MESA_PLATFORMS:ts,:tl}"

# Disable some options
MESON_ARGS+=	-Dgallium-xa=disabled \
		-Dgles1=disabled \
		-Dgles2=disabled \
		-Dglx=disabled \
		-Degl=disabled \
		-Dosmesa=none \
		-Dllvm=disabled \
		-Dtools=""

post-patch:
	${REINPLACE_CMD} -e '/SYSCONFDIR/ s|/etc|${PREFIX}/etc|g' \
		-e '/DATADIR/ s|/usr/share|${PREFIX}/share|g' \
		${WRKSRC}/src/util/xmlconfig.c

post-install:
	@${RM} -r ${STAGEDIR}/etc/OpenCL
	${RM} -rfv ${STAGEDIR}${PREFIX}/share/drirc.d
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/dri/classic
	${MV} -v ${STAGEDIR}${PREFIX}/lib/dri/swrast_dri.so \
		${STAGEDIR}${PREFIX}/lib/dri/classic/

.include <bsd.port.post.mk>
