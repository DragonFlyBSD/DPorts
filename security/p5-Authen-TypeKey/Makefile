# New ports collection makefile for:	p5-Authen-TypeKey
# Date created:		2006-03-19
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/security/p5-Authen-TypeKey/Makefile,v 1.8 2012/11/17 06:01:10 svnexp Exp $
#

PORTNAME=	Authen-TypeKey
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	TypeKey authentication verification

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-Class-ErrorHandler>=0:${PORTSDIR}/devel/p5-Class-ErrorHandler \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Authen::TypeKey.3

.include <bsd.port.mk>
