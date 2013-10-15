# Created by: Mauricio Herrera Cuadra <mauricio@arareko.net>
# $FreeBSD: biology/p5-Bio-ASN1-EntrezGene/Makefile 327709 2013-09-20 15:55:44Z bapt $

PORTNAME=	Bio-ASN1-EntrezGene
PORTVERSION=	1.091
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	mauricio@arareko.net
COMMENT=	Regular expression-based Perl Parser for NCBI Entrez Gene

WRKSRC=		${WRKDIR}/Bio-ASN1-EntrezGene-1.09

USES=		perl5
USE_PERL5=	configure

MAN3=		Bio::ASN1::EntrezGene.3 \
		Bio::ASN1::EntrezGene::Indexer.3 \
		Bio::ASN1::Sequence.3 \
		Bio::ASN1::Sequence::Indexer.3

NO_STAGE=	yes
.include <bsd.port.mk>
