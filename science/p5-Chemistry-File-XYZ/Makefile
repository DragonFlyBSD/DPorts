# New ports collection makefile for:	p5-Chemistry-File-XYZ
# Date created:		2010-03-10
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/science/p5-Chemistry-File-XYZ/Makefile,v 1.5 2012/11/17 06:00:59 svnexp Exp $
#

PORTNAME=	Chemistry-File-XYZ
PORTVERSION=	0.11
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	XYZ molecule format reader/writer

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol
RUN_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol

MAN3=	Chemistry::File::XYZ.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
