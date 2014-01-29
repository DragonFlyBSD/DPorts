# Created by: ijliao
# $FreeBSD: textproc/scss/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	scss
PORTVERSION=	0.4.2
CATEGORIES=	textproc scheme
MASTER_SITES=	SAVANNAH \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Scheme module for W3C Cascading Stylesheets recommendation

LICENSE=	GPLv3

RUN_DEPENDS=	guile:${PORTSDIR}/lang/guile

NO_BUILD=	yes

FILES=	lexer.scm parser.scm scss.scm properties.scm \
	interface/sdom.scm common.scm

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/guile/scss
.for f in ${FILES}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${PREFIX}/share/guile/scss
.endfor
	@${INSTALL_DATA} ${WRKSRC}/scss.info ${STAGEDIR}${PREFIX}/info

.include <bsd.port.mk>
