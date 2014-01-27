# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: x11-fonts/fontconfig-reference/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	6
PORTEPOCH=	0

DOCSDIR=	${PREFIX}/share/doc/fontconfig-devel

do-install:
	${INSTALL_MAN} ${WRKSRC}/doc/*.3 ${STAGEDIR}${PREFIX}/man/man3
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/fontconfig-devel.pdf \
		${WRKSRC}/doc/fontconfig-devel.txt ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/html
	${INSTALL_DATA} ${WRKSRC}/doc/fontconfig-devel/* ${STAGEDIR}${DOCSDIR}/html

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
