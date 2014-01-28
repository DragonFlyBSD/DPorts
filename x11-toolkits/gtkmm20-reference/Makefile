# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-toolkits/gtkmm20-reference/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	7

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-2.0.pc:${PORTSDIR}/x11-toolkits/gtkmm20

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-2.0

post-patch:
	@${FIND} ${WRKSRC}/examples -name Makefile.in \
		| ${XARGS} ${REINPLACE_CMD} -e '/^install-am:/ s| all-am||'

do-install:
.for d in docs examples
	@cd ${WRKSRC}/${d} && ${GMAKE} ${MAKE_ARGS} install
.endfor

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
