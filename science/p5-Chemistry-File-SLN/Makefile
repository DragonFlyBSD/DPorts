# New ports collection makefile for:	p5-Chemistry-File-SLN
# Date created:		2010-03-10
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/science/p5-Chemistry-File-SLN/Makefile,v 1.5 2012/11/17 06:00:59 svnexp Exp $
#

PORTNAME=	Chemistry-File-SLN
PORTVERSION=	0.11
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	swills@FreeBSD.org
COMMENT=	SLN linear notation parser/writer

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol \
		p5-Chemistry-Ring>=0:${PORTSDIR}/science/p5-Chemistry-Ring \
		p5-Chemistry-Canonicalize>=0:${PORTSDIR}/science/p5-Chemistry-Canonicalize \
		p5-Chemistry-Bond-Find>=0:${PORTSDIR}/science/p5-Chemistry-Bond-Find \
		p5-Parse-Yapp>=0:${PORTSDIR}/devel/p5-Parse-Yapp
RUN_DEPENDS=	p5-Chemistry-Mol>=0:${PORTSDIR}/science/p5-Chemistry-Mol \
		p5-Chemistry-Ring>=0:${PORTSDIR}/science/p5-Chemistry-Ring \
		p5-Chemistry-Canonicalize>=0:${PORTSDIR}/science/p5-Chemistry-Canonicalize \
		p5-Chemistry-Bond-Find>=0:${PORTSDIR}/science/p5-Chemistry-Bond-Find \
		p5-Parse-Yapp>=0:${PORTSDIR}/devel/p5-Parse-Yapp

MAN3=	Chemistry::File::SLN.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
