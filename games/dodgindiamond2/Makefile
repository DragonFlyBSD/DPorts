# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: games/dodgindiamond2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=		dodgindiamond2
PORTVERSION=		0.2.2
PORTREVISION=	8
CATEGORIES=		games
MASTER_SITES=		http://www.usebox.net/jjm/dd2/releases/
DISTNAME=		dd2-${PORTVERSION}

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Old school shoot'em up game

USE_SDL=		sdl image mixer
GNU_CONFIGURE=		yes
CONFIGURE_ARGS=		--localstatedir=/var/games

post-patch:
	@${REINPLACE_CMD} -e 's|COPYING||g' ${WRKSRC}/Makefile.in
.if defined(NOPORTDOCS)
	@${REINPLACE_CMD} '/install-data-am:/s/install-docsDATA//' \
		${WRKSRC}/Makefile.in
.endif

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc
	${INSTALL_DATA} ${WRKSRC}/src/data/dd2.cfg ${STAGEDIR}${PREFIX}/etc/dd2.cfg.sample

.include <bsd.port.mk>
