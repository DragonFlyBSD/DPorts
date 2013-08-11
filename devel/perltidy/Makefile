# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: devel/perltidy/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	perltidy
PORTVERSION=	20130717
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:S/%SUBDIR%/Perl/} \
		SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}
DISTNAME=	Perl-Tidy-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Indents and reformats Perl scripts to make them easier to read

LICENSE=	GPLv2

USES=		perl5
USE_PERL5=	configure

MAN1=		perltidy.1
MAN3=		Perl::Tidy.3

.include <bsd.port.mk>
