# New ports collection makefile for:	p5-DateTime-Format-Mail
# Date created:	   4 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Format-Mail/Makefile,v 1.15 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Format-Mail
PORTVERSION=	0.30.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convert between DateTime and RFC2822/822 formats

RUN_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		DateTime::Format::Mail.3

.include <bsd.port.mk>
