# New ports collection makefile for:	p5-Lexical-Var
# Date created:		2012-02-24
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Lexical-Var/Makefile,v 1.7 2012/12/17 13:43:44 svnexp Exp $
#

PORTNAME=	Lexical-Var
PORTVERSION=	0.007
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for static variables without namespace pollution

PERL_CONFIGURE=	yes

MAN3=	Lexical::Sub.3 Lexical::Var.3

post-patch:
	@${REINPLACE_CMD} -e '/Lexical::SealRequireHints/d' ${WRKSRC}/Build.PL ${WRKSRC}/lib/Lexical/Var.pm

.include <bsd.port.mk>
