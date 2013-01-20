# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: ports/devel/perltidy/Makefile,v 1.41 2013/01/14 09:43:59 svnexp Exp $

PORTNAME=	perltidy
PORTVERSION=	20121207
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:S/%SUBDIR%/Perl/} \
		SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
DISTNAME=	Perl-Tidy-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Indents and reformats Perl scripts to make them easier to read

LICENSE=	GPLv2

PERL_CONFIGURE=	yes

MAN1=		perltidy.1
MAN3=		Perl::Tidy.3

.include <bsd.port.mk>
