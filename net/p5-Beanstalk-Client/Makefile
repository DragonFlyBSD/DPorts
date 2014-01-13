# $FreeBSD: net/p5-Beanstalk-Client/Makefile 338810 2014-01-05 17:53:15Z az $

PORTNAME=	Beanstalk-Client
PORTVERSION=	1.06
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GBARR
PKGNAMEPREFIX=	p5-

MAINTAINER=	vsevolod@FreeBSD.org
COMMENT=	Perl API for beanstalkd, a distributed queue daemon

BUILD_DEPENDS=	p5-YAML-Syck>=0:${PORTSDIR}/textproc/p5-YAML-Syck \
				p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
				p5-Error>=0:${PORTSDIR}/lang/p5-Error
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
