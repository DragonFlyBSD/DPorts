# Created by: Elvis Chiang <elvis@sslab.cs.ccu.edu.tw>
# $FreeBSD: textproc/p5-Spork/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Spork
PORTVERSION=	0.21
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:INGY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Creating standalone HTML slideshows from Kwiki markup

BUILD_DEPENDS=	p5-Kwiki>=0.38:${PORTSDIR}/www/p5-Kwiki \
		p5-Spoon>=0.22:${PORTSDIR}/devel/p5-Spoon
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
