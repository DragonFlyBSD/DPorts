# New ports collection makefile for:	ExtUtils-Constant
# Date created:	   03 February 2005
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/devel/p5-ExtUtils-Constant/Makefile,v 1.6 2012/11/17 05:56:15 svnexp Exp $
#

PORTNAME=	ExtUtils-Constant
PORTVERSION=	0.23
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate XS code to import C header constants

PERL_CONFIGURE=	yes

MAN3=		ExtUtils::Constant.3 ExtUtils::Constant::Base.3 \
		ExtUtils::Constant::Utils.3 ExtUtils::Constant::XS.3

post-patch:
	@${REINPLACE_CMD} -e '/INSTALLDIRS/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
