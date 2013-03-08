# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: ports/textproc/p5-Net-Snort-Parser/Makefile,v 1.1 2013/02/20 19:26:27 svnexp Exp $

PORTNAME=	Net-Snort-Parser
PORTVERSION=	1.41
CATEGORIES=	textproc perl5
MASTER_SITES=	https://projects.honeynet.org/svn/honeywall/honeywall/trunk/rpm-devel/perl-${PORTNAME}/ \
    		http://mirrors.rit.edu/zi/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl modules for parsing Snort configuration files

PERL_CONFIGURE=	yes

MAN1=		snortconfig.1
MAN3=		Net::Snort::Parser::File.3 Net::Snort::Parser::Rule.3

.include <bsd.port.mk>
