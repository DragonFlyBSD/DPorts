# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: games/p5-Games-Alak/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	Games-Alak
PORTVERSION=	0.19
CATEGORIES=	games perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple game-tree implementation of a gomoku-like game

TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure

MAN3=		Games::Alak.3

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e "s,^build_.*,,g" ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
