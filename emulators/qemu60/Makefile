# Created by: Aaron LI <aly@aaronly.me>
# $FreeBSD$

PORTNAME=	qemu
PORTVERSION=	6.0.0
CATEGORIES=	emulators
MASTER_SITES=	https://download.qemu.org/

MAINTAINER=	aly@aaronly.me
COMMENT=	Generic and open source machine emulator and virtualizer

LICENSE=	GPLv2 LGPL21 MIT
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS?=	libfreetype.so:print/freetype2 \
		libfontconfig.so:x11-fonts/fontconfig \
		liblzo2.so:archivers/lzo2 \
		libnettle.so:security/nettle \
		libpcre2-8.so:devel/pcre2 \
		libsnappy.so:archivers/snappy \
		libzstd.so:archivers/zstd

USES=		bison compiler:c11 cpe gmake gnome iconv:wchar_t ncurses \
		ninja perl5 pkgconfig python:build tar:xz xorg
USE_GNOME=	cairo glib20 libxml2
USE_PERL5=	build
USE_XORG=	pixman

# QEMU ships the 'build' directory for configuring and building.
CONFIGURE_OUTSOURCE=	yes
CONFIGURE_WRKSRC=	${WRKSRC}/build

HAS_CONFIGURE=	yes
CONFIGURE_ARGS?=--prefix=${PREFIX} \
		--interp-prefix=${PREFIX}/share/qemu \
		--mandir=${MANPREFIX}/man \
		--localstatedir=/var \
		--python=${PYTHON_CMD} \
		--enable-curses \
		--enable-docs \
		--enable-tools \
		--disable-libssh \
		--disable-netmap
CONFIGURE_ARGS+=--disable-linux-user \
		--disable-linux-aio \
		--disable-linux-io-uring \
		--disable-kvm \
		--disable-hax \
		--disable-hvf \
		--disable-whpx \
		--disable-xen
CONFIGURE_ARGS+=--disable-stack-protector \
		--disable-avx2 \
		--disable-avx512f

OPTIONS_DEFINE=		CAPSTONE CURL DEBUG DOCS JPEG GNUTLS GTK3 ISCSI \
			NFS OPENGL PNG SAMBA SASL SPICE USBREDIR VDE X11
OPTIONS_DEFAULT=	CURL JPEG GNUTLS NFS OPENGL PNG SASL SPICE VDE X11

CAPSTONE_DESC=		Disassembly framework support
CAPSTONE_LIB_DEPENDS=	libcapstone.so:devel/capstone4
CAPSTONE_CONFIGURE_ON=	--enable-capstone=system \
			--extra-cflags=-I${LOCALBASE}/include/capstone
CAPSTONE_CONFIGURE_OFF=	--disable-capstone

CURL_DESC=		cURL connectivity
CURL_LIB_DEPENDS=	libcurl.so:ftp/curl
CURL_CONFIGURE_OFF=	--disable-curl

DEBUG_CONFIGURE_ON=	--enable-debug

DOCS_USES=		makeinfo
DOCS_BUILD_DEPENDS=	sphinx-build:textproc/py-sphinx \
			texi2html:textproc/texi2html
DOCS_CONFIGURE_OFF=	--disable-docs

JPEG_DESC=		JPEG lossy compression for VNC server
JPEG_USES=		jpeg
JPEG_CONFIGURE_OFF=	--disable-vnc-jpeg

GNUTLS_DESC=		GNUTLS cryptography support
GNUTLS_LIB_DEPENDS=	libgnutls.so:security/gnutls
GNUTLS_CONFIGURE_OFF=	--disable-gnutls

GTK3_DESC=		GTK UI support
GTK3_USES=		gettext gl
GTK3_USE=		GNOME=gdkpixbuf2,gtk30,vte3 XORG=x11,xext
GTK3_LIB_DEPENDS=	libxkbcommon.so:x11/libxkbcommon
GTK3_CONFIGURE_OFF=	--disable-gtk --disable-vte

ISCSI_DESC=		iSCSI support
ISCSI_LIB_DEPENDS=	libiscsi.so:net/libiscsi
ISCSI_CONFIGURE_OFF=	--disable-libiscsi

NFS_DESC=		NFS support
NFS_LIB_DEPENDS=	libnfs.so:net/libnfs
NFS_CONFIGURE_OFF=	--disable-nfs

OPENGL_DESC=		OpenGL support
OPENGL_USES=		gl
OPENGL_USE=		GL=gl
OPENGL_LIB_DEPENDS=	libepoxy.so:graphics/libepoxy
OPENGL_CONFIGURE_OFF=	--disable-opengl

PNG_DESC=		PNG compression for VNC server
PNG_LIB_DEPENDS=	libpng.so:graphics/png
PNG_CONFIGURE_OFF=	--disable-vnc-png

SAMBA_DESC=		Samba support (for -smb)
SAMBA_USES=		samba:run
SAMBA_CONFIGURE_ON=	--smbd=${LOCALBASE}/sbin/smbd

SASL_DESC=		SASL encryption for VNC server
SASL_LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2
SASL_CONFIGURE_OFF=	--disable-vnc-sasl

SPICE_DESC=		SPICE protocol support
SPICE_LIB_DEPENDS=	libspice-server.so:devel/libspice-server
SPICE_BUILD_DEPENDS=	spice-protocol>0:devel/spice-protocol
SPICE_CONFIGURE_OFF=	--disable-spice

USBREDIR_DESC=		USB network redirection support
USBREDIR_BUILD_DEPENDS=	usbredir>=0.6:net/usbredir
USBREDIR_RUN_DEPENDS=	usbredir>=0.6:net/usbredir
USBREDIR_CONFIGURE_OFF=	--disable-usb-redir

VDE_DESC=		VDE network support
VDE_LIB_DEPENDS=	libvdeplug.so:net/vde2
VDE_CONFIGURE_OFF=	--disable-vde

X11_DESC=		X11 SDL UI support
X11_USES=		sdl
X11_USE=		GNOME=gdkpixbuf2 SDL=sdl2,image2 XORG=x11,xext
X11_CONFIGURE_OFF=	--disable-sdl --disable-sdl-image

EXTRA_PATCHES=	${DFLY_PATCHDIR}/extra-nvmm01.patch
EXTRA_PATCHES+=	${DFLY_PATCHDIR}/extra-nvmm02.patch
EXTRA_PATCHES+=	${DFLY_PATCHDIR}/extra-nvmm03.patch
EXTRA_PATCHES+=	${DFLY_PATCHDIR}/extra-nvmm04.patch

.include <bsd.port.options.mk>

.if !defined(STRIP) || ${STRIP} == ""
CONFIGURE_ARGS+=--disable-strip
.endif

#PORTDOCS?=	docs index.html interop/.buildinfo interop/* \
#		qemu-ga-ref.html qemu-ga-ref.txt qemu-qmp-ref.html \
#		qemu-qmp-ref.txt specs/.buildinfo specs/* system/.buildinfo \
#		system/* tools/.buildinfo tools/* user/.buildinfo user/*

OPTIONS_SUB=	yes
INSTALLS_ICONS=	yes

post-install-DOCS-on:
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} docs ${STAGEDIR}${DOCSDIR}/)

.include <bsd.port.mk>
