# Created by: Jacques Marneweck <jacques@php.net>
# $FreeBSD: devel/p5-Danga-Socket/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Danga-Socket
PORTVERSION=	1.61
CATEGORIES=	devel net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Event loop and event-driven async socket base class

RUN_DEPENDS=	p5-IO-KQueue>=0:${PORTSDIR}/devel/p5-IO-KQueue \
		p5-Sys-Syscall>=0:${PORTSDIR}/devel/p5-Sys-Syscall

USES=		perl5
USE_PERL5=	configure

MAN3=	Danga::Socket.3

.include <bsd.port.mk>
