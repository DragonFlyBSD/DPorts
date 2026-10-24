PORTNAME=	mesa26-dri
DISTVERSION=	${MESAVERSION}
CATEGORIES=	graphics

CONFLICTS_INSTALL=	mesa-dri

COMMENT=	OpenGL hardware acceleration drivers for DRI2+
WWW=		https://www.mesa3d.org/

BUILD_DEPENDS+=	glslangValidator:graphics/glslang \
		${PYTHON_PKGNAMEPREFIX}ply>0:devel/py-ply@${PY_FLAVOR} \
		libva>=0:multimedia/libva
LIB_DEPENDS+=	libgallium-${MESAVERSION}.so:graphics/mesa26-libs \
		libgbm.so:graphics/mesa26-libs

USES+=		llvm:lib,noexport

GALLIUM_DRIVERS=	virgl zink

OPTIONS_DEFINE=		ZSTD
OPTIONS_GROUP=		GALLIUM PLATFORM VULKAN
OPTIONS_DEFAULT=	WAYLAND X11 ZSTD
OPTIONS_SUB=		yes

ZSTD_DESC=		Use ZSTD for shader cache
ZSTD_LIB_DEPENDS=	libzstd.so:archivers/zstd
ZSTD_MESON_ENABLED=	zstd

OPTIONS_GROUP_PLATFORM=	X11 WAYLAND
X11_DESC=		Enable X11 support for GBM/EGL
WAYLAND_DESC=		Enable Wayland support for GBM/EGL and Vulkan
WAYLAND_BUILD_DEPENDS=	wayland-protocols>=1.8:graphics/wayland-protocols
WAYLAND_LIB_DEPENDS=	libwayland-client.so:graphics/wayland

OPTIONS_GROUP_GALLIUM=	crocus i915 iris llvmpipe panfrost r300 r600 radeonsi svga
GALLIUM_DESC=		Unified OpenGL drivers
crocus_DESC=		Intel GPU Gen4 (Broadwater) to Gen7 (Haswell)
crocus_BUILD_DEPENDS=	libclc-${LLVM_PORT:T}>0:devel/libclc@${LLVM_PORT:T}
i915_DESC=		Intel GPU Gen3 (Grantsdale to Pineview)
iris_DESC=		Intel GPU Gen8 (Broadwell) and newer
iris_BUILD_DEPENDS=	libclc-${LLVM_PORT:T}>0:devel/libclc@${LLVM_PORT:T} \
			spirv-tools>0:graphics/spirv-tools \
			spirv-llvm-translator-${LLVM_PORT:T}>0:devel/spirv-llvm-translator@${LLVM_PORT:T}
iris_RUN_DEPENDS=	spirv-tools>0:graphics/spirv-tools \
			spirv-llvm-translator-${LLVM_PORT:T}>0:devel/spirv-llvm-translator@${LLVM_PORT:T}
iris_IMPLIES=		SPIRV
llvmpipe_DESC=		Software Rasterizer
panfrost_DESC=		ARM Midgard and Bifrost
panfrost_BUILD_DEPENDS=	libclc-${LLVM_PORT:T}>0:devel/libclc@${LLVM_PORT:T}
r300_DESC=		AMD/ATI R300, R400 and R500
r600_DESC=		AMD/ATI R600, R700, Evergreen, Northern Islands
radeonsi_DESC=		AMD/ATI Southern Islands and newer
svga_DESC=		VMWare Virtual GPU

OPTIONS_EXCLUDE+=	${ARCH:Marmv7:C/.+/crocus i915 iris panfrost r300 r600 radeonsi svga/}
OPTIONS_EXCLUDE+=	${ARCH:Naarch64:C/.+/panfrost/}
OPTIONS_EXCLUDE+=	${ARCH:Namd64:Ni386:Nx86_64:C/.+/crocus i915 iris svga/}
MESON_ARGS+=		-Dgallium-drivers=${GALLIUM_DRIVERS:ts,}
. for _gd in ${OPTIONS_GROUP_GALLIUM}
OPTIONS_DEFAULT+=	${_gd}
${_gd}_VARS+=		GALLIUM_DRIVERS+=${_gd}
. endfor

OPTIONS_GROUP_VULKAN=	anv radv swrast_vk nouveau
VULKAN_DESC=		Vulkan drivers
anv_DESC=		Intel GPU Gen9 and newer Vulkan support
anv_BUILD_DEPENDS=	libclc-${LLVM_PORT:T}>0:devel/libclc@${LLVM_PORT:T} \
			spirv-tools>0:graphics/spirv-tools \
			spirv-llvm-translator-${LLVM_PORT:T}>0:devel/spirv-llvm-translator@${LLVM_PORT:T}
anv_RUN_DEPENDS=	spirv-tools>0:graphics/spirv-tools \
			spirv-llvm-translator-${LLVM_PORT:T}>0:devel/spirv-llvm-translator@${LLVM_PORT:T}
radv_DESC=		AMD/ATI Southern Islands and newer Vulkan support
swrast_vk_DESC=		Software Rasterizer Vulkan support
nouveau_DESC=		NVIDIA Turing and newer Vulkan support (NVK)
nouveau_BUILD_DEPENDS=	rustc:lang/${RUST_DEFAULT} bindgen:devel/rust-bindgen-cli \
			cbindgen:devel/rust-cbindgen
nouveau_MESON_FALSE=	b_lundef # rust std references environ, same as FreeBSD rusticl

OPTIONS_EXCLUDE+=	${ARCH:Marmv7:C/.+/anv radv/}
OPTIONS_EXCLUDE+=	${ARCH:Namd64:Ni386:Nx86_64:C/.+/anv/}
MESON_ARGS+=		-Dvulkan-drivers=${VULKAN_DRIVERS:ts,}
. for _vd in ${OPTIONS_GROUP_VULKAN}
OPTIONS_DEFAULT+=	${_vd}
${_vd}_VARS+=		VULKAN_DRIVERS+=${_vd:S/anv/intel/:S/radv/amd/:S/swrast_vk/swrast/}
. endfor

.include <bsd.port.options.mk>
.include "${.CURDIR:H:H}/graphics/mesa26-dri/Makefile.common"
MASTER_SITES+=	https://static.crates.io/crates/paste/paste-1.0.14.crate?dummy=/:paste
MASTER_SITES+=	https://static.crates.io/crates/rustc-hash/rustc-hash-2.1.1.crate?dummy=/:rhash
MASTER_SITES+=	https://static.crates.io/crates/syn/syn-2.0.87.crate?dummy=/:syn \
		https://static.crates.io/crates/quote/quote-1.0.35.crate?dummy=/:quote \
		https://static.crates.io/crates/proc-macro2/proc-macro2-1.0.86.crate?dummy=/:pmacro \
		https://static.crates.io/crates/unicode-ident/unicode-ident-1.0.12.crate?dummy=/:uident
DISTFILES+=	paste-1.0.14.tar.gz:paste rustc-hash-2.1.1.tar.gz:rhash
DISTFILES+=	syn-2.0.87.tar.gz:syn quote-1.0.35.tar.gz:quote \
		proc-macro2-1.0.86.tar.gz:pmacro unicode-ident-1.0.12.tar.gz:uident
EXTRACT_ONLY=	mesa-26.1.4${EXTRACT_SUFX}
# All NVK Rust sources must be fetched and checked before configuration.
MESON_ARGS+=	--wrap-mode=nodownload

LDFLAGS_i386=		-Wl,-znotext

.if ${PORT_OPTIONS:MX11}
MESA_PLATFORMS+=	x11
LIB_DEPENDS+=	libxcb-keysyms.so:x11/xcb-util-keysyms
USE_XORG+=		x11 xcb xdamage xext xfixes xorgproto xrandr xshmfence \
			xv xxf86vm
.else
MESON_ARGS+=		-Dxlib-lease=disabled
.endif

.if ${PORT_OPTIONS:MWAYLAND}
MESA_PLATFORMS+=	wayland
.endif

MESON_ARGS+=	-Dplatforms="${MESA_PLATFORMS:ts,:tl}"

# Disable some options
MESON_ARGS+=	-Dandroid-libbacktrace=disabled \
		-Dgles1=enabled \
		-Dgles2=enabled \
		-Dglvnd=disabled \
		-Dglx=disabled \
		-Degl=enabled \
		-Dlmsensors=disabled \
		-Dmicrosoft-clc=disabled \
		-Dvalgrind=disabled

.if ${ARCH} != x86_64
MESON_ARGS+=	-Dintel-rt=disabled # https://gitlab.freedesktop.org/mesa/mesa/-/issues/10629
.endif

.for _gd in ${OPTIONS_GROUP_GALLIUM}
. if defined(GALLIUM_DRIVERS) && ${GALLIUM_DRIVERS:M${_gd}}
PLIST_SUB+=	${_gd}=""
. else
PLIST_SUB+=	${_gd}="@comment "
. endif
.endfor

PLIST_SUB+= ARCH=${ARCH:S/amd/x86_/}
.for _vd in ${OPTIONS_GROUP_VULKAN}
. if defined(VULKAN_DRIVERS) && ${VULKAN_DRIVERS:M${_vd}}
PLIST_SUB+=	${_vd}=""
. else
PLIST_SUB+=	${_vd}="@comment "
. endif
.endfor

post-install:
# Shared libraries and defaults belong to mesa26-libs or libglvnd.
	${RM} -r ${STAGEDIR}${PREFIX}/include
	${RM} ${STAGEDIR}${PREFIX}/lib/libgallium-${MESAVERSION}.so
	${RM} ${STAGEDIR}${PREFIX}/lib/libgbm.so* \
		${STAGEDIR}${PREFIX}/lib/libEGL.so* \
		${STAGEDIR}${PREFIX}/lib/libGLESv1_CM.so* \
		${STAGEDIR}${PREFIX}/lib/libGLESv2.so*
	${RM} -r ${STAGEDIR}${PREFIX}/lib/gbm
	${RM} -r ${STAGEDIR}${PREFIX}/lib/pkgconfig
	${RM} -r ${STAGEDIR}${PREFIX}/libdata/pkgconfig
	${RM} ${STAGEDIR}${PREFIX}/share/drirc.d/00-mesa-defaults.conf
	${INSTALL_DATA} ${FILESDIR}/01-freebsd.conf \
		${STAGEDIR}${PREFIX}/share/drirc.d

post-extract:
	@${MKDIR} ${WRKSRC}/subprojects/packagecache
	${CP} ${DISTDIR}/paste-1.0.14.tar.gz ${WRKSRC}/subprojects/packagecache/
	${CP} ${DISTDIR}/rustc-hash-2.1.1.tar.gz ${WRKSRC}/subprojects/packagecache/
	${CP} ${DISTDIR}/syn-2.0.87.tar.gz ${DISTDIR}/quote-1.0.35.tar.gz \
		${DISTDIR}/proc-macro2-1.0.86.tar.gz ${DISTDIR}/unicode-ident-1.0.12.tar.gz \
		${WRKSRC}/subprojects/packagecache/

.include <bsd.port.post.mk>
