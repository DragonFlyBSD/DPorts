# New ports collection makefile for:	p5-Data-Pageset
# Date created:				29 May 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/databases/p5-Data-Pageset/Makefile,v 1.8 2012/11/17 05:55:16 svnexp Exp $
#

PORTNAME=	Data-Pageset
PORTVERSION=	1.06
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Page numbering and page sets

BUILD_DEPENDS=	p5-Data-Page>=2:${PORTSDIR}/databases/p5-Data-Page \
		p5-Test-Simple>=0.1:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Data::Pageset.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
