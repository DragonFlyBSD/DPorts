# Created by: vanilla
# $FreeBSD: x11-toolkits/p5-Tk-Getopt/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Tk-Getopt
PORTVERSION=	0.50
PORTREVISION=	3
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	User configuration window for Tk with interface to Getopt::Long

BUILD_DEPENDS=	p5-Tk>=0:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Tk::Getopt.3

NO_STAGE=	yes
.include <bsd.port.mk>
