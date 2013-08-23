# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Lexical-Var/Makefile 324951 2013-08-19 07:59:29Z culot $

PORTNAME=	Lexical-Var
PORTVERSION=	0.008
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for static variables without namespace pollution

USES=		perl5
USE_PERL5=	configure

MAN3=	Lexical::Sub.3 Lexical::Var.3

post-patch:
	@${REINPLACE_CMD} -e '/Lexical::SealRequireHints/d' ${WRKSRC}/Build.PL ${WRKSRC}/lib/Lexical/Var.pm

.include <bsd.port.mk>
