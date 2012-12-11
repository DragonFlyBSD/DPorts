# New ports collection makefile for:	p5-Games-Alak
# Date created:		2006-08-28
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/games/p5-Games-Alak/Makefile,v 1.5 2012/11/17 05:57:48 svnexp Exp $
#

PORTNAME=	Games-Alak
PORTVERSION=	0.19
CATEGORIES=	games perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple game-tree implementation of a gomoku-like game

TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		Games::Alak.3

post-patch:
	${REINPLACE_CMD} -e "s,^build_.*,,g" ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
