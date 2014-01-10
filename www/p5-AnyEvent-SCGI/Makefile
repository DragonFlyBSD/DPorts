# $FreeBSD: www/p5-AnyEvent-SCGI/Makefile 338784 2014-01-05 15:30:10Z az $

PORTNAME=	AnyEvent-SCGI
PORTVERSION=	1.1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Event based SCGI server

RUN_DEPENDS=	\
	p5-AnyEvent>=5.2:${PORTSDIR}/devel/p5-AnyEvent
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
