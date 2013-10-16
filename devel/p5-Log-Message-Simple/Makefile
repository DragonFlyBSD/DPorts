# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Log-Message-Simple/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Log-Message-Simple
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides standardized logging facilities using the Log::Message module

BUILD_DEPENDS=	p5-Log-Message>=0:${PORTSDIR}/devel/p5-Log-Message
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Log::Message::Simple.3

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
