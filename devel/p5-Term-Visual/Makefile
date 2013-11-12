# Created by: chinsan
# $FreeBSD: devel/p5-Term-Visual/Makefile 332245 2013-10-31 14:31:30Z vanilla $

PORTNAME=	Term-Visual
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Split-terminal user interface

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-Curses>=0:${PORTSDIR}/devel/p5-Curses
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
