# New ports collection makefile for:	p5-DateTime-Format-HTTP
# Date created:	   7 july 2003
# Whom:		   Mathieu Arnold <mat@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-HTTP/Makefile,v 1.15 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-HTTP
PORTVERSION=	0.40
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	HTTP date conversion routines

BUILD_DEPENDS:=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

PERL_MODBUILD=	yes

MAN3=		DateTime::Format::HTTP.3

.include <bsd.port.mk>
