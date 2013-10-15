# $FreeBSD: devel/p5-AnyEvent-MessagePack/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	AnyEvent-MessagePack
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension of AnyEvent for MessagePack

RUN_DEPENDS=	\
	p5-AnyEvent>=7.02:${PORTSDIR}/devel/p5-AnyEvent \
	p5-Data-MessagePack>=0.46:${PORTSDIR}/devel/p5-Data-MessagePack \
	p5-Data-MessagePack-Stream>=0.07:${PORTSDIR}/devel/p5-Data-MessagePack-Stream
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=	AnyEvent::MessagePack.3

NO_STAGE=	yes
.include <bsd.port.mk>
