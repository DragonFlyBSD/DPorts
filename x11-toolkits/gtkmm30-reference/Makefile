# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-toolkits/gtkmm30-reference/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	1

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-3.0.pc:${PORTSDIR}/x11-toolkits/gtkmm30 \
		glibmm-reference>=0:${PORTSDIR}/devel/glibmm-reference

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-3.0

do-install:
.for d in docs
	@cd ${WRKSRC}/${d} && ${GMAKE} ${MAKE_ARGS} install
.endfor

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
