# Created by: Steve Wills <steve@mouf.net>
# $FreeBSD: science/p5-Chemistry-Bond-Find/Makefile 326873 2013-09-10 08:26:53Z az $

PORTNAME=	Chemistry-Bond-Find
PORTVERSION=	0.23
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Detect bonds in a molecule and assign formal bond orders

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol
RUN_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol

MAN3=	Chemistry::Bond::Find.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
