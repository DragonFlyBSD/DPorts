# New ports collection makefile for:	URI-OpenURL
# Date created:				18 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/net/p5-URI-OpenURL/Makefile,v 1.8 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	URI-OpenURL
PORTVERSION=	0.4.6
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Parse and construct OpenURL's (NISO Z39.88-2004)

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	URI::OpenURL.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
