PORTNAME=	nheko
DISTVERSIONPREFIX=v
DISTVERSION=	0.10.2
PORTREVISION=	1
CATEGORIES=	net-im

MAINTAINER=	adridg@FreeBSD.org
COMMENT=	Matrix IM client based on Qt technologies
WWW=		https://nheko.im/nheko-reborn/nheko/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	nlohmann-json>=3:devel/nlohmann-json \
		asciidoc>=10:textproc/asciidoc
# All those boost-libs are pulled in through mtxclient, which
# links to them but stage-qa still complains.
LIB_DEPENDS=	\
		libcmark.so:textproc/cmark \
		libcoeurl.so:ftp/coeurl \
		libfmt.so:devel/libfmt \
		liblmdb.so:databases/lmdb \
		libmatrix_client.so:net-im/mtxclient \
		libolm.so:security/olm \
		libqt5keychain.so:security/qtkeychain@qt5 \
		libspdlog.so:devel/spdlog

USES=		cmake compiler:c++17-lang desktop-file-utils \
		localbase:ldflags pkgconfig qt:5 ssl tar:xz
USE_QT=		concurrent core dbus declarative gui multimedia network \
		quickcontrols2 svg widgets \
		graphicaleffects:run \
		buildtools:build linguist:build qmake:build

# There is one external dependency: lmdb++
#  - lmdb++ is a single header file, it just needs to be included
CMAKE_ARGS=	-DLMDBXX_INCLUDE_DIR=${WRKSRC}/deps/lmdb \
		-DVOIP=OFF \
		-DCMAKE_INSTALL_MANDIR=share/man
CFLAGS+=	-DSPDLOG_FMT_EXTERNAL=1
LDFLAGS+=	-L${LOCALBASE}/lib -lfmt

USE_GITHUB=	yes
GH_ACCOUNT=	Nheko-Reborn
GH_TUPLE=	hoytech:lmdbxx:029fb681213af3020f5e3a86045445552bd024c5:lmdb/deps/lmdb

.include <bsd.port.mk>
