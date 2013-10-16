# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-toolkits/gtkmm30-reference/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTREVISION=	1

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-3.0.pc:${PORTSDIR}/x11-toolkits/gtkmm30 \
		glibmm-reference>=0:${PORTSDIR}/devel/glibmm-reference

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-3.0

NO_STAGE=	yes
do-install:
.if !defined(NOPORTDOCS)
.for d in docs
	@cd ${WRKSRC}/${d} && ${GMAKE} install
.endfor
.endif

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
