# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: irc/p5-AnyEvent-IRC/Makefile 332729 2013-11-04 14:28:11Z vanilla $

PORTNAME=	AnyEvent-IRC
PORTVERSION=	0.97
CATEGORIES=	irc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Event system independent IRC protocol module

BUILD_DEPENDS=	p5-AnyEvent>=0:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Object-Event>=0.7:${PORTSDIR}/devel/p5-Object-Event
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
